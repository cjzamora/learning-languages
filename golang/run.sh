# Helper script to automatically build and run the given source file.
# Usage: run.sh <source-file>

# if source file is not provided
if [ -z $1 ]; then
    echo "Usage: run.sh <source-file>"
    exit 1
fi

# check if go is installed
if ! command -v go &> /dev/null; then
    echo "Error: go is not installed"
    exit 1
fi

# get current folder of this script
FOLDER="$(basename $(dirname $1))"

# get filename
FILE_SRC=$(basename $1)

echo "> Running \"$FOLDER/$FILE_SRC\""
echo ""

go run $1