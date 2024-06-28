# Helper script to automatically build and run the given source file.
# Usage: run.sh <source-file>

# if source file is not provided
if [ -z $1 ]; then
    echo "Usage: run.sh <source-file>"
    exit 1
fi

# check if as is installed
if ! command -v as &> /dev/null; then
    echo "Error: as is not installed"
    exit 1
fi

# get current directory of this script
CWD="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FOLDER="$(basename $(dirname $1))"

# get filename without extension
FILE_SRC=$(basename $1)
FILE_OUT="${FILE_SRC%.*}"

# create build directory if not exists
mkdir -p $CWD/.bin/$FOLDER

echo "> Writting \"$FOLDER/$FILE_SRC\""

# build the source file
if [ -z $2 ]; then
    as $1 -o $CWD/.bin/$FOLDER/$FILE_OUT.o
    echo "> as $1 -o ./bin/$FOLDER/$FILE_OUT.o"
else
    as $1 $2 -o $CWD/.bin/$FOLDER/$FILE_OUT.o
    echo "> as $1 $2 -o ./bin/$FOLDER/$FILE_OUT.o"
fi

echo "> Linking \"$FOLDER/$FILE_OUT.o\""
# ld is supposed to be used to link the object file,
# but it is not working properly, so using gcc instead
gcc -o $CWD/.bin/$FOLDER/$FILE_OUT $CWD/.bin/$FOLDER/$FILE_OUT.o

echo "> Running \"$FOLDER/$FILE_OUT\""
echo ""

# run the built file
$CWD/.bin/$FOLDER/$FILE_OUT