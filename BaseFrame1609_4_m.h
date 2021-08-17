//
// Generated file, do not edit! Created by nedtool 5.4 from veins/modules/messages/BaseFrame1609_4.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __VEINS_BASEFRAME1609_4_M_H
#define __VEINS_BASEFRAME1609_4_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "veins/base/utils/SimpleAddress.h"
// }}


namespace Veins {

/**
 * Class generated from <tt>veins/modules/messages/BaseFrame1609_4.msg:29</tt> by nedtool.
 * <pre>
 * packet BaseFrame1609_4
 * {
 *     //Channel Number on which this packet was sent
 *     int channelNumber;
 *     //User priority with which this packet was sent (note the AC mapping rules in Mac1609_4::mapUserPriority)
 *     int userPriority = 7;
 *     //Unique number to identify the service
 *     int psid = 0;
 *     //Recipient of frame (-1 for any)
 *     LAddress::L2Type recipientAddress = -1;
 * }
 * </pre>
 */
class BaseFrame1609_4 : public ::omnetpp::cPacket
{
  protected:
    int channelNumber;
    int userPriority;
    int psid;
    LAddress::L2Type recipientAddress;

  private:
    void copy(const BaseFrame1609_4& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BaseFrame1609_4&);

  public:
    BaseFrame1609_4(const char *name=nullptr, short kind=0);
    BaseFrame1609_4(const BaseFrame1609_4& other);
    virtual ~BaseFrame1609_4();
    BaseFrame1609_4& operator=(const BaseFrame1609_4& other);
    virtual BaseFrame1609_4 *dup() const override {return new BaseFrame1609_4(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
    virtual int getUserPriority() const;
    virtual void setUserPriority(int userPriority);
    virtual int getPsid() const;
    virtual void setPsid(int psid);
    virtual LAddress::L2Type& getRecipientAddress();
    virtual const LAddress::L2Type& getRecipientAddress() const {return const_cast<BaseFrame1609_4*>(this)->getRecipientAddress();}
    virtual void setRecipientAddress(const LAddress::L2Type& recipientAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BaseFrame1609_4& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BaseFrame1609_4& obj) {obj.parsimUnpack(b);}

} // namespace Veins

#endif // ifndef __VEINS_BASEFRAME1609_4_M_H

