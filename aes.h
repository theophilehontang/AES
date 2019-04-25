void AddRoundKey(unsigned char *state,unsigned char *W, int r);
void SubBytes(unsigned char *state);
void ShiftRows(unsigned char *state);
void ExpansionKey(unsigned char *key,unsigned char *W);
void MixColumns(unsigned char *state);
void AES_128_encrypt(unsigned char ciphertext[16], unsigned char plaintext[16]);
void InvShiftRows(unsigned char *state);
void InvSubBytes(unsigned char *state);
void InvMixColumns(unsigned char *state);
void AES_128_decrypt(unsigned char ciphertext[16], unsigned char plaintext[16]);

unsigned char multGF(unsigned char a, unsigned char b);