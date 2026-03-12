@isTest
private class OASDomainServiceInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainServiceInfo domainServiceInfo1 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo2 = domainServiceInfo1;
        OASDomainServiceInfo domainServiceInfo3 = new OASDomainServiceInfo();
        OASDomainServiceInfo domainServiceInfo4 = domainServiceInfo3;

        System.assert(domainServiceInfo1.equals(domainServiceInfo2));
        System.assert(domainServiceInfo2.equals(domainServiceInfo1));
        System.assert(domainServiceInfo1.equals(domainServiceInfo1));
        System.assert(domainServiceInfo3.equals(domainServiceInfo4));
        System.assert(domainServiceInfo4.equals(domainServiceInfo3));
        System.assert(domainServiceInfo3.equals(domainServiceInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainServiceInfo domainServiceInfo1 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo2 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo3 = new OASDomainServiceInfo();
        OASDomainServiceInfo domainServiceInfo4 = new OASDomainServiceInfo();

        System.assert(domainServiceInfo1.equals(domainServiceInfo2));
        System.assert(domainServiceInfo2.equals(domainServiceInfo1));
        System.assert(domainServiceInfo3.equals(domainServiceInfo4));
        System.assert(domainServiceInfo4.equals(domainServiceInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainServiceInfo domainServiceInfo1 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo2 = new OASDomainServiceInfo();

        System.assertEquals(false, domainServiceInfo1.equals('foo'));
        System.assertEquals(false, domainServiceInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainServiceInfo domainServiceInfo1 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo2 = new OASDomainServiceInfo();
        OASDomainServiceInfo domainServiceInfo3;

        System.assertEquals(false, domainServiceInfo1.equals(domainServiceInfo3));
        System.assertEquals(false, domainServiceInfo2.equals(domainServiceInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainServiceInfo domainServiceInfo1 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo2 = new OASDomainServiceInfo();

        System.assertEquals(domainServiceInfo1.hashCode(), domainServiceInfo1.hashCode());
        System.assertEquals(domainServiceInfo2.hashCode(), domainServiceInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainServiceInfo domainServiceInfo1 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo2 = OASDomainServiceInfo.getExample();
        OASDomainServiceInfo domainServiceInfo3 = new OASDomainServiceInfo();
        OASDomainServiceInfo domainServiceInfo4 = new OASDomainServiceInfo();

        System.assert(domainServiceInfo1.equals(domainServiceInfo2));
        System.assert(domainServiceInfo3.equals(domainServiceInfo4));
        System.assertEquals(domainServiceInfo1.hashCode(), domainServiceInfo2.hashCode());
        System.assertEquals(domainServiceInfo3.hashCode(), domainServiceInfo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainServiceInfo domainServiceInfo = new OASDomainServiceInfo();
        Map<String, String> x-property-mappings = domainServiceInfo.getx-property-mappings();
        System.assertEquals('domainId', x-property-mappings.get('domain_id'));
        System.assertEquals('domainHostname', x-property-mappings.get('domain_hostname'));
        System.assertEquals('domainUsername', x-property-mappings.get('domain_username'));
        System.assertEquals('domainPassword', x-property-mappings.get('domain_password'));
        System.assertEquals('domainType', x-property-mappings.get('domain_type'));
        System.assertEquals('domainCurrency', x-property-mappings.get('domain_currency'));
        System.assertEquals('domainExpireDate', x-property-mappings.get('domain_expire_date'));
        System.assertEquals('domainOrderDate', x-property-mappings.get('domain_order_date'));
        System.assertEquals('domainCustid', x-property-mappings.get('domain_custid'));
        System.assertEquals('domainStatus', x-property-mappings.get('domain_status'));
        System.assertEquals('domainInvoice', x-property-mappings.get('domain_invoice'));
        System.assertEquals('domainCoupon', x-property-mappings.get('domain_coupon'));
    }
}
