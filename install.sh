# +-----------------------------+
# |		$ sh ./install.sh		|
# +-----------------------------+

DIR="/usr/local/bin"
EXE=./pwgen
if test -f "$EXE"; then
	echo "Program already built."
else
	echo "Building the program..."
	sh ./build.sh
fi
sudo cp $EXE $DIR
if test -f "$DIR/pwgen"; then
	echo "Password Generator installed successfully!"
else
	echo "An error occurred during the instalation!"
fi
