# Helper script to automatically build and run the given source file.
# Usage: run.sh <source-file> <compiler-flags>

# if source file is not provided
if [ -z $1 ]; then
    echo "Usage: run.sh <source-file> <compiler-flags>"
    exit 1
fi

# check if gcc is installed
if ! command -v gcc &> /dev/null; then
    echo "Error: gcc is not installed"
    exit 1
fi

# get current directory of this script
CWD="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# get the directory tree
DIR="$(cd $(dirname $1) && pwd)"
# replace CWD with empty string
DIR=${DIR//$CWD/""}
# remove leading slash
DIR=${DIR#/}

# get filename without extension
FILE_SRC=$(basename $1)
FILE_OUT="${FILE_SRC%.*}"

# create build directory if not exists
mkdir -p $CWD/.bin/$DIR

echo $CWD/.bin/$DIR

echo "> Compiling \"$DIR/$FILE_SRC\""

# build the source file
if [ -z $2 ]; then
    gcc $1 -o $CWD/.bin/$DIR/$FILE_OUT -Wall
    echo "> gcc $1 -o ./bin/$DIR/$FILE_OUT -Wall"
else
    gcc $1 $2 -o $CWD/.bin/$DIR/$FILE_OUT -Wall
    echo "> gcc $1 $2 -o ./bin/$DIR/$FILE_OUT -Wall"
fi

echo "> Running \"$DIR/$FILE_OUT\""
echo ""

# run the built file
$CWD/.bin/$DIR/$FILE_OUT