#include <stdio.h>
#include <stdint.h>

union IPv4 {
    uint32_t address;
    uint8_t octets[4];
};

int main() {
    union IPv4 ip;

    printf("Enter an IPv4 address (e.g., 192 168 23 24): ");
    scanf("%hhu %hhu %hhu %hhu", &ip.octets[3], &ip.octets[2], &ip.octets[1], &ip.octets[0]);

    printf("IPv4 in octet form: %d.%d.%d.%d\n",
           ip.octets[3], ip.octets[2], ip.octets[1], ip.octets[0]);
    printf("IPv4 in hexadecimal: 0x%08X\n", ip.address);

    return 0;
}
