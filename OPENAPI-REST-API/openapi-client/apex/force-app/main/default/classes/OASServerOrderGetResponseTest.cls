@isTest
private class OASServerOrderGetResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderGetResponse serverOrderGetResponse1 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse2 = serverOrderGetResponse1;
        OASServerOrderGetResponse serverOrderGetResponse3 = new OASServerOrderGetResponse();
        OASServerOrderGetResponse serverOrderGetResponse4 = serverOrderGetResponse3;

        System.assert(serverOrderGetResponse1.equals(serverOrderGetResponse2));
        System.assert(serverOrderGetResponse2.equals(serverOrderGetResponse1));
        System.assert(serverOrderGetResponse1.equals(serverOrderGetResponse1));
        System.assert(serverOrderGetResponse3.equals(serverOrderGetResponse4));
        System.assert(serverOrderGetResponse4.equals(serverOrderGetResponse3));
        System.assert(serverOrderGetResponse3.equals(serverOrderGetResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderGetResponse serverOrderGetResponse1 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse2 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse3 = new OASServerOrderGetResponse();
        OASServerOrderGetResponse serverOrderGetResponse4 = new OASServerOrderGetResponse();

        System.assert(serverOrderGetResponse1.equals(serverOrderGetResponse2));
        System.assert(serverOrderGetResponse2.equals(serverOrderGetResponse1));
        System.assert(serverOrderGetResponse3.equals(serverOrderGetResponse4));
        System.assert(serverOrderGetResponse4.equals(serverOrderGetResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderGetResponse serverOrderGetResponse1 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse2 = new OASServerOrderGetResponse();

        System.assertEquals(false, serverOrderGetResponse1.equals('foo'));
        System.assertEquals(false, serverOrderGetResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderGetResponse serverOrderGetResponse1 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse2 = new OASServerOrderGetResponse();
        OASServerOrderGetResponse serverOrderGetResponse3;

        System.assertEquals(false, serverOrderGetResponse1.equals(serverOrderGetResponse3));
        System.assertEquals(false, serverOrderGetResponse2.equals(serverOrderGetResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderGetResponse serverOrderGetResponse1 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse2 = new OASServerOrderGetResponse();

        System.assertEquals(serverOrderGetResponse1.hashCode(), serverOrderGetResponse1.hashCode());
        System.assertEquals(serverOrderGetResponse2.hashCode(), serverOrderGetResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderGetResponse serverOrderGetResponse1 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse2 = OASServerOrderGetResponse.getExample();
        OASServerOrderGetResponse serverOrderGetResponse3 = new OASServerOrderGetResponse();
        OASServerOrderGetResponse serverOrderGetResponse4 = new OASServerOrderGetResponse();

        System.assert(serverOrderGetResponse1.equals(serverOrderGetResponse2));
        System.assert(serverOrderGetResponse3.equals(serverOrderGetResponse4));
        System.assertEquals(serverOrderGetResponse1.hashCode(), serverOrderGetResponse2.hashCode());
        System.assertEquals(serverOrderGetResponse3.hashCode(), serverOrderGetResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderGetResponse serverOrderGetResponse = new OASServerOrderGetResponse();
        Map<String, String> x-property-mappings = serverOrderGetResponse.getx-property-mappings();
        System.assertEquals('formValues', x-property-mappings.get('form_values'));
        System.assertEquals('configIds', x-property-mappings.get('config_ids'));
        System.assertEquals('cpuLi', x-property-mappings.get('cpu_li'));
        System.assertEquals('configLi', x-property-mappings.get('config_li'));
        System.assertEquals('r_currency', x-property-mappings.get('currency'));
        System.assertEquals('fieldLabel', x-property-mappings.get('field_label'));
        System.assertEquals('cpuCores', x-property-mappings.get('cpu_cores'));
        System.assertEquals('assetServers', x-property-mappings.get('asset_servers'));
        System.assertEquals('buyItServers', x-property-mappings.get('buy_it_servers'));
        System.assertEquals('displayShowmore', x-property-mappings.get('display_showmore'));
        System.assertEquals('custDiscount', x-property-mappings.get('cust_discount'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServerOrderGetResponse serverOrderGetResponse = new OASServerOrderGetResponse();
        System.assertEquals(new Map<String, OASCpu>(), serverOrderGetResponse.cpuLi);
        System.assertEquals(new Map<String, OASFieldLabel>(), serverOrderGetResponse.fieldLabel);
        System.assertEquals(new Map<String, Map<String, OASCpuWithDefaults>>(), serverOrderGetResponse.cpuCores);
        System.assertEquals(new List<OASRegion>(), serverOrderGetResponse.regions);
        System.assertEquals(new List<OASAssetServer>(), serverOrderGetResponse.assetServers);
        System.assertEquals(new List<Object>(), serverOrderGetResponse.buyItServers);
        System.assertEquals(null, serverOrderGetResponse.formValues);
        System.assertEquals(null, serverOrderGetResponse.configIds);
        System.assertEquals(null, serverOrderGetResponse.cpu);
        System.assertEquals(null, serverOrderGetResponse.configLi);
        System.assertEquals(null, serverOrderGetResponse.frequency);
        System.assertEquals(null, serverOrderGetResponse.r_currency);
        System.assertEquals(null, serverOrderGetResponse.country);
        System.assertEquals(null, serverOrderGetResponse.step);
        System.assertEquals(null, serverOrderGetResponse.currencySymbol);
        System.assertEquals(null, serverOrderGetResponse.custid);
        System.assertEquals(null, serverOrderGetResponse.ima);
        System.assertEquals(null, serverOrderGetResponse.displayShowmore);
        System.assertEquals(null, serverOrderGetResponse.custDiscount);
    }
}
