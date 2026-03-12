@isTest
private class OASGetScrubIpDetails200ResponseServiTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo1 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo2 = getScrubIpDetails200ResponseServiceInfo1;
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo3 = new OASGetScrubIpDetails200ResponseServi();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo4 = getScrubIpDetails200ResponseServiceInfo3;

        System.assert(getScrubIpDetails200ResponseServiceInfo1.equals(getScrubIpDetails200ResponseServiceInfo2));
        System.assert(getScrubIpDetails200ResponseServiceInfo2.equals(getScrubIpDetails200ResponseServiceInfo1));
        System.assert(getScrubIpDetails200ResponseServiceInfo1.equals(getScrubIpDetails200ResponseServiceInfo1));
        System.assert(getScrubIpDetails200ResponseServiceInfo3.equals(getScrubIpDetails200ResponseServiceInfo4));
        System.assert(getScrubIpDetails200ResponseServiceInfo4.equals(getScrubIpDetails200ResponseServiceInfo3));
        System.assert(getScrubIpDetails200ResponseServiceInfo3.equals(getScrubIpDetails200ResponseServiceInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo1 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo2 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo3 = new OASGetScrubIpDetails200ResponseServi();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo4 = new OASGetScrubIpDetails200ResponseServi();

        System.assert(getScrubIpDetails200ResponseServiceInfo1.equals(getScrubIpDetails200ResponseServiceInfo2));
        System.assert(getScrubIpDetails200ResponseServiceInfo2.equals(getScrubIpDetails200ResponseServiceInfo1));
        System.assert(getScrubIpDetails200ResponseServiceInfo3.equals(getScrubIpDetails200ResponseServiceInfo4));
        System.assert(getScrubIpDetails200ResponseServiceInfo4.equals(getScrubIpDetails200ResponseServiceInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo1 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo2 = new OASGetScrubIpDetails200ResponseServi();

        System.assertEquals(false, getScrubIpDetails200ResponseServiceInfo1.equals('foo'));
        System.assertEquals(false, getScrubIpDetails200ResponseServiceInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo1 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo2 = new OASGetScrubIpDetails200ResponseServi();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo3;

        System.assertEquals(false, getScrubIpDetails200ResponseServiceInfo1.equals(getScrubIpDetails200ResponseServiceInfo3));
        System.assertEquals(false, getScrubIpDetails200ResponseServiceInfo2.equals(getScrubIpDetails200ResponseServiceInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo1 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo2 = new OASGetScrubIpDetails200ResponseServi();

        System.assertEquals(getScrubIpDetails200ResponseServiceInfo1.hashCode(), getScrubIpDetails200ResponseServiceInfo1.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseServiceInfo2.hashCode(), getScrubIpDetails200ResponseServiceInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo1 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo2 = OASGetScrubIpDetails200ResponseServi.getExample();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo3 = new OASGetScrubIpDetails200ResponseServi();
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo4 = new OASGetScrubIpDetails200ResponseServi();

        System.assert(getScrubIpDetails200ResponseServiceInfo1.equals(getScrubIpDetails200ResponseServiceInfo2));
        System.assert(getScrubIpDetails200ResponseServiceInfo3.equals(getScrubIpDetails200ResponseServiceInfo4));
        System.assertEquals(getScrubIpDetails200ResponseServiceInfo1.hashCode(), getScrubIpDetails200ResponseServiceInfo2.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseServiceInfo3.hashCode(), getScrubIpDetails200ResponseServiceInfo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetScrubIpDetails200ResponseServi getScrubIpDetails200ResponseServiceInfo = new OASGetScrubIpDetails200ResponseServi();
        Map<String, String> x-property-mappings = getScrubIpDetails200ResponseServiceInfo.getx-property-mappings();
        System.assertEquals('scrubIpId', x-property-mappings.get('scrub_ip_id'));
        System.assertEquals('scrubIpType', x-property-mappings.get('scrub_ip_type'));
        System.assertEquals('scrubIpCustid', x-property-mappings.get('scrub_ip_custid'));
        System.assertEquals('scrubIpOrderDate', x-property-mappings.get('scrub_ip_order_date'));
        System.assertEquals('scrubIpIp', x-property-mappings.get('scrub_ip_ip'));
        System.assertEquals('scrubIpServiceId', x-property-mappings.get('scrub_ip_service_id'));
        System.assertEquals('scrubIpServiceModule', x-property-mappings.get('scrub_ip_service_module'));
        System.assertEquals('scrubIpStatus', x-property-mappings.get('scrub_ip_status'));
        System.assertEquals('scrubIpInvoice', x-property-mappings.get('scrub_ip_invoice'));
        System.assertEquals('scrubIpCurrency', x-property-mappings.get('scrub_ip_currency'));
        System.assertEquals('scrubIpCoupon', x-property-mappings.get('scrub_ip_coupon'));
        System.assertEquals('scrubIpComment', x-property-mappings.get('scrub_ip_comment'));
    }
}
