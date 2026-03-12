@isTest
private class OASVpsOrderPutResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderPutResponse vpsOrderPutResponse1 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse2 = vpsOrderPutResponse1;
        OASVpsOrderPutResponse vpsOrderPutResponse3 = new OASVpsOrderPutResponse();
        OASVpsOrderPutResponse vpsOrderPutResponse4 = vpsOrderPutResponse3;

        System.assert(vpsOrderPutResponse1.equals(vpsOrderPutResponse2));
        System.assert(vpsOrderPutResponse2.equals(vpsOrderPutResponse1));
        System.assert(vpsOrderPutResponse1.equals(vpsOrderPutResponse1));
        System.assert(vpsOrderPutResponse3.equals(vpsOrderPutResponse4));
        System.assert(vpsOrderPutResponse4.equals(vpsOrderPutResponse3));
        System.assert(vpsOrderPutResponse3.equals(vpsOrderPutResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderPutResponse vpsOrderPutResponse1 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse2 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse3 = new OASVpsOrderPutResponse();
        OASVpsOrderPutResponse vpsOrderPutResponse4 = new OASVpsOrderPutResponse();

        System.assert(vpsOrderPutResponse1.equals(vpsOrderPutResponse2));
        System.assert(vpsOrderPutResponse2.equals(vpsOrderPutResponse1));
        System.assert(vpsOrderPutResponse3.equals(vpsOrderPutResponse4));
        System.assert(vpsOrderPutResponse4.equals(vpsOrderPutResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderPutResponse vpsOrderPutResponse1 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse2 = new OASVpsOrderPutResponse();

        System.assertEquals(false, vpsOrderPutResponse1.equals('foo'));
        System.assertEquals(false, vpsOrderPutResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderPutResponse vpsOrderPutResponse1 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse2 = new OASVpsOrderPutResponse();
        OASVpsOrderPutResponse vpsOrderPutResponse3;

        System.assertEquals(false, vpsOrderPutResponse1.equals(vpsOrderPutResponse3));
        System.assertEquals(false, vpsOrderPutResponse2.equals(vpsOrderPutResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderPutResponse vpsOrderPutResponse1 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse2 = new OASVpsOrderPutResponse();

        System.assertEquals(vpsOrderPutResponse1.hashCode(), vpsOrderPutResponse1.hashCode());
        System.assertEquals(vpsOrderPutResponse2.hashCode(), vpsOrderPutResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderPutResponse vpsOrderPutResponse1 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse2 = OASVpsOrderPutResponse.getExample();
        OASVpsOrderPutResponse vpsOrderPutResponse3 = new OASVpsOrderPutResponse();
        OASVpsOrderPutResponse vpsOrderPutResponse4 = new OASVpsOrderPutResponse();

        System.assert(vpsOrderPutResponse1.equals(vpsOrderPutResponse2));
        System.assert(vpsOrderPutResponse3.equals(vpsOrderPutResponse4));
        System.assertEquals(vpsOrderPutResponse1.hashCode(), vpsOrderPutResponse2.hashCode());
        System.assertEquals(vpsOrderPutResponse3.hashCode(), vpsOrderPutResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsOrderPutResponse vpsOrderPutResponse = new OASVpsOrderPutResponse();
        Map<String, String> x-property-mappings = vpsOrderPutResponse.getx-property-mappings();
        System.assertEquals('r_continue', x-property-mappings.get('continue'));
        System.assertEquals('couponCode', x-property-mappings.get('coupon_code'));
        System.assertEquals('serviceCost', x-property-mappings.get('service_cost'));
        System.assertEquals('sliceCost', x-property-mappings.get('slice_cost'));
        System.assertEquals('serviceType', x-property-mappings.get('service_type'));
        System.assertEquals('repeatSliceCost', x-property-mappings.get('repeat_slice_cost'));
        System.assertEquals('originalSliceCost', x-property-mappings.get('original_slice_cost'));
        System.assertEquals('originalCost', x-property-mappings.get('original_cost'));
        System.assertEquals('repeatServiceCost', x-property-mappings.get('repeat_service_cost'));
        System.assertEquals('monthlyServiceCost', x-property-mappings.get('monthly_service_cost'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsOrderPutResponse vpsOrderPutResponse = new OASVpsOrderPutResponse();
        System.assertEquals(new List<oas_any_type_not_mapped>(), vpsOrderPutResponse.errors);
        System.assertEquals(null, vpsOrderPutResponse.r_continue);
        System.assertEquals(null, vpsOrderPutResponse.couponCode);
        System.assertEquals(null, vpsOrderPutResponse.serviceCost);
        System.assertEquals(null, vpsOrderPutResponse.sliceCost);
        System.assertEquals(null, vpsOrderPutResponse.serviceType);
        System.assertEquals(null, vpsOrderPutResponse.repeatSliceCost);
        System.assertEquals(null, vpsOrderPutResponse.originalSliceCost);
        System.assertEquals(null, vpsOrderPutResponse.originalCost);
        System.assertEquals(null, vpsOrderPutResponse.repeatServiceCost);
        System.assertEquals(null, vpsOrderPutResponse.monthlyServiceCost);
        System.assertEquals(null, vpsOrderPutResponse.custid);
        System.assertEquals(null, vpsOrderPutResponse.os);
        System.assertEquals(null, vpsOrderPutResponse.slices);
        System.assertEquals(null, vpsOrderPutResponse.platform);
        System.assertEquals(null, vpsOrderPutResponse.controlpanel);
        System.assertEquals(null, vpsOrderPutResponse.period);
        System.assertEquals(null, vpsOrderPutResponse.location);
        System.assertEquals(null, vpsOrderPutResponse.version);
        System.assertEquals(null, vpsOrderPutResponse.hostname);
        System.assertEquals(null, vpsOrderPutResponse.coupon);
        System.assertEquals(null, vpsOrderPutResponse.rootpass);
    }
}
