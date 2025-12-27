def caesar(text, shift, encrypt=True):
    # Checks to see if the shift variable is an integer, returns an error if it isn't.
    if not isinstance(shift, int):
        return 'Shift must be an integer value.'
    # Checks to see if the shift variable is between 1 and 25, because if it's below or above that, the alphabet will just repeat, making the cipher useless.
    if shift < 1 or shift > 25:
        return 'Shift must be an integer between 1 and 25.'
    # You wouldn't believe it if I told you
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    # If not encrypting, then shift backwards to decrypt :)
    if not encrypt:
        shift = - shift
    # Creates a shifted version of the alphabet by slicing and wrapping around.
    shifted_alphabet = alphabet[shift:] + alphabet[:shift]
    # Creates a translation table to map regular characters to their respective shifted character.
    translation_table = str.maketrans(alphabet + alphabet.upper(), shifted_alphabet + shifted_alphabet.upper())
    encrypted_text = text.translate(translation_table)
    return encrypted_text
# Encrypt and decrypt wrapper.
def encrypt(text, shift):
    return caesar(text, shift)
# Quite literally just flips the encrypt flag with a False statement.
def decrypt(text, shift):
    return caesar(text, shift, encrypt=False)
# Encrypts the string "freeCodeCamp" with a shift of 3, and then prints it. *Fin*
encrypted_text = encrypt('freeCodeCamp', 3)
print(encrypted_text)
