@isTest
private class OASServerOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrder serverOrder1 = OASServerOrder.getExample();
        OASServerOrder serverOrder2 = serverOrder1;
        OASServerOrder serverOrder3 = new OASServerOrder();
        OASServerOrder serverOrder4 = serverOrder3;

        System.assert(serverOrder1.equals(serverOrder2));
        System.assert(serverOrder2.equals(serverOrder1));
        System.assert(serverOrder1.equals(serverOrder1));
        System.assert(serverOrder3.equals(serverOrder4));
        System.assert(serverOrder4.equals(serverOrder3));
        System.assert(serverOrder3.equals(serverOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrder serverOrder1 = OASServerOrder.getExample();
        OASServerOrder serverOrder2 = OASServerOrder.getExample();
        OASServerOrder serverOrder3 = new OASServerOrder();
        OASServerOrder serverOrder4 = new OASServerOrder();

        System.assert(serverOrder1.equals(serverOrder2));
        System.assert(serverOrder2.equals(serverOrder1));
        System.assert(serverOrder3.equals(serverOrder4));
        System.assert(serverOrder4.equals(serverOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrder serverOrder1 = OASServerOrder.getExample();
        OASServerOrder serverOrder2 = new OASServerOrder();

        System.assertEquals(false, serverOrder1.equals('foo'));
        System.assertEquals(false, serverOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrder serverOrder1 = OASServerOrder.getExample();
        OASServerOrder serverOrder2 = new OASServerOrder();
        OASServerOrder serverOrder3;

        System.assertEquals(false, serverOrder1.equals(serverOrder3));
        System.assertEquals(false, serverOrder2.equals(serverOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrder serverOrder1 = OASServerOrder.getExample();
        OASServerOrder serverOrder2 = new OASServerOrder();

        System.assertEquals(serverOrder1.hashCode(), serverOrder1.hashCode());
        System.assertEquals(serverOrder2.hashCode(), serverOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrder serverOrder1 = OASServerOrder.getExample();
        OASServerOrder serverOrder2 = OASServerOrder.getExample();
        OASServerOrder serverOrder3 = new OASServerOrder();
        OASServerOrder serverOrder4 = new OASServerOrder();

        System.assert(serverOrder1.equals(serverOrder2));
        System.assert(serverOrder3.equals(serverOrder4));
        System.assertEquals(serverOrder1.hashCode(), serverOrder2.hashCode());
        System.assertEquals(serverOrder3.hashCode(), serverOrder4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrder serverOrder = new OASServerOrder();
        Map<String, String> x-property-mappings = serverOrder.getx-property-mappings();
        System.assertEquals('formValues', x-property-mappings.get('form_values'));
        System.assertEquals('configIds', x-property-mappings.get('config_ids'));
        System.assertEquals('fieldLabel', x-property-mappings.get('field_label'));
        System.assertEquals('cpuLi', x-property-mappings.get('cpu_li'));
        System.assertEquals('memoryLi', x-property-mappings.get('memory_li'));
        System.assertEquals('bandwidthLi', x-property-mappings.get('bandwidth_li'));
        System.assertEquals('ipsLi', x-property-mappings.get('ips_li'));
        System.assertEquals('osLi', x-property-mappings.get('os_li'));
        System.assertEquals('cpLi', x-property-mappings.get('cp_li'));
        System.assertEquals('raidLi', x-property-mappings.get('raid_li'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServerOrder serverOrder = new OASServerOrder();
        System.assertEquals(new List<OASServerOrderRAID>(), serverOrder.raidLi);
        System.assertEquals(null, serverOrder.formValues);
        System.assertEquals(null, serverOrder.configIds);
        System.assertEquals(null, serverOrder.cpu);
        System.assertEquals(null, serverOrder.fieldLabel);
        System.assertEquals(null, serverOrder.cpuLi);
        System.assertEquals(null, serverOrder.memoryLi);
        System.assertEquals(null, serverOrder.bandwidthLi);
        System.assertEquals(null, serverOrder.ipsLi);
        System.assertEquals(null, serverOrder.osLi);
        System.assertEquals(null, serverOrder.cpLi);
    }
}
