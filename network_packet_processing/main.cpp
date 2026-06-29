#include <iostream>
#include "Packet.hpp"

using namespace std;
// Testing and Validation
int main()
{
    Packet udpPacket(PacketType::DATA, Protocol::UDP);
    udpPacket.validatePacket();
    udpPacket.displayInfo();
    Packet tcpPacket(PacketType::CONTROL, Protocol::TCP);
    tcpPacket.validatePacket();
    tcpPacket.displayInfo();

    return 0;
}

// This is samle branch testing
