@isTest
private class OASMailServiceInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailServiceInfo mailServiceInfo1 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo2 = mailServiceInfo1;
        OASMailServiceInfo mailServiceInfo3 = new OASMailServiceInfo();
        OASMailServiceInfo mailServiceInfo4 = mailServiceInfo3;

        System.assert(mailServiceInfo1.equals(mailServiceInfo2));
        System.assert(mailServiceInfo2.equals(mailServiceInfo1));
        System.assert(mailServiceInfo1.equals(mailServiceInfo1));
        System.assert(mailServiceInfo3.equals(mailServiceInfo4));
        System.assert(mailServiceInfo4.equals(mailServiceInfo3));
        System.assert(mailServiceInfo3.equals(mailServiceInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailServiceInfo mailServiceInfo1 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo2 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo3 = new OASMailServiceInfo();
        OASMailServiceInfo mailServiceInfo4 = new OASMailServiceInfo();

        System.assert(mailServiceInfo1.equals(mailServiceInfo2));
        System.assert(mailServiceInfo2.equals(mailServiceInfo1));
        System.assert(mailServiceInfo3.equals(mailServiceInfo4));
        System.assert(mailServiceInfo4.equals(mailServiceInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailServiceInfo mailServiceInfo1 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo2 = new OASMailServiceInfo();

        System.assertEquals(false, mailServiceInfo1.equals('foo'));
        System.assertEquals(false, mailServiceInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailServiceInfo mailServiceInfo1 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo2 = new OASMailServiceInfo();
        OASMailServiceInfo mailServiceInfo3;

        System.assertEquals(false, mailServiceInfo1.equals(mailServiceInfo3));
        System.assertEquals(false, mailServiceInfo2.equals(mailServiceInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailServiceInfo mailServiceInfo1 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo2 = new OASMailServiceInfo();

        System.assertEquals(mailServiceInfo1.hashCode(), mailServiceInfo1.hashCode());
        System.assertEquals(mailServiceInfo2.hashCode(), mailServiceInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailServiceInfo mailServiceInfo1 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo2 = OASMailServiceInfo.getExample();
        OASMailServiceInfo mailServiceInfo3 = new OASMailServiceInfo();
        OASMailServiceInfo mailServiceInfo4 = new OASMailServiceInfo();

        System.assert(mailServiceInfo1.equals(mailServiceInfo2));
        System.assert(mailServiceInfo3.equals(mailServiceInfo4));
        System.assertEquals(mailServiceInfo1.hashCode(), mailServiceInfo2.hashCode());
        System.assertEquals(mailServiceInfo3.hashCode(), mailServiceInfo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailServiceInfo mailServiceInfo = new OASMailServiceInfo();
        Map<String, String> x-property-mappings = mailServiceInfo.getx-property-mappings();
        System.assertEquals('mailId', x-property-mappings.get('mail_id'));
        System.assertEquals('mailType', x-property-mappings.get('mail_type'));
        System.assertEquals('mailCurrency', x-property-mappings.get('mail_currency'));
        System.assertEquals('mailOrderDate', x-property-mappings.get('mail_order_date'));
        System.assertEquals('mailCustid', x-property-mappings.get('mail_custid'));
        System.assertEquals('mailQuota', x-property-mappings.get('mail_quota'));
        System.assertEquals('mailStatus', x-property-mappings.get('mail_status'));
        System.assertEquals('mailInvoice', x-property-mappings.get('mail_invoice'));
        System.assertEquals('mailUsername', x-property-mappings.get('mail_username'));
        System.assertEquals('mailIp', x-property-mappings.get('mail_ip'));
        System.assertEquals('mailCoupon', x-property-mappings.get('mail_coupon'));
        System.assertEquals('mailExtra', x-property-mappings.get('mail_extra'));
        System.assertEquals('mailServerStatus', x-property-mappings.get('mail_server_status'));
        System.assertEquals('mailComment', x-property-mappings.get('mail_comment'));
    }
}
