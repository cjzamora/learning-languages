# Helper script to automatically build and run the given source file.
# Usage: run.sh <source-file>

# if source file is not provided
if [ -z $1 ]; then
    echo "Usage: run.sh <source-file>"
    exit 1
fi

# check if python is installed
if ! command -v python &> /dev/null; then
    echo "Error: python is not installed"
    exit 1
fi

# get current folder of this script
FOLDER="$(basename $(dirname $1))"

# get filename
FILE_SRC=$(basename $1)

echo "> Running \"$FOLDER/$FILE_SRC\""
echo ""

python $1