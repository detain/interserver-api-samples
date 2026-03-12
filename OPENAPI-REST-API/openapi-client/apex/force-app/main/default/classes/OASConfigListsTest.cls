@isTest
private class OASConfigListsTest {
    @isTest
    private static void equalsSameInstance() {
        OASConfigLists configLists1 = OASConfigLists.getExample();
        OASConfigLists configLists2 = configLists1;
        OASConfigLists configLists3 = new OASConfigLists();
        OASConfigLists configLists4 = configLists3;

        System.assert(configLists1.equals(configLists2));
        System.assert(configLists2.equals(configLists1));
        System.assert(configLists1.equals(configLists1));
        System.assert(configLists3.equals(configLists4));
        System.assert(configLists4.equals(configLists3));
        System.assert(configLists3.equals(configLists3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASConfigLists configLists1 = OASConfigLists.getExample();
        OASConfigLists configLists2 = OASConfigLists.getExample();
        OASConfigLists configLists3 = new OASConfigLists();
        OASConfigLists configLists4 = new OASConfigLists();

        System.assert(configLists1.equals(configLists2));
        System.assert(configLists2.equals(configLists1));
        System.assert(configLists3.equals(configLists4));
        System.assert(configLists4.equals(configLists3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASConfigLists configLists1 = OASConfigLists.getExample();
        OASConfigLists configLists2 = new OASConfigLists();

        System.assertEquals(false, configLists1.equals('foo'));
        System.assertEquals(false, configLists2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASConfigLists configLists1 = OASConfigLists.getExample();
        OASConfigLists configLists2 = new OASConfigLists();
        OASConfigLists configLists3;

        System.assertEquals(false, configLists1.equals(configLists3));
        System.assertEquals(false, configLists2.equals(configLists3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASConfigLists configLists1 = OASConfigLists.getExample();
        OASConfigLists configLists2 = new OASConfigLists();

        System.assertEquals(configLists1.hashCode(), configLists1.hashCode());
        System.assertEquals(configLists2.hashCode(), configLists2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASConfigLists configLists1 = OASConfigLists.getExample();
        OASConfigLists configLists2 = OASConfigLists.getExample();
        OASConfigLists configLists3 = new OASConfigLists();
        OASConfigLists configLists4 = new OASConfigLists();

        System.assert(configLists1.equals(configLists2));
        System.assert(configLists3.equals(configLists4));
        System.assertEquals(configLists1.hashCode(), configLists2.hashCode());
        System.assertEquals(configLists3.hashCode(), configLists4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASConfigLists configLists = new OASConfigLists();
        Map<String, String> x-property-mappings = configLists.getx-property-mappings();
        System.assertEquals('cpuLi', x-property-mappings.get('cpu_li'));
        System.assertEquals('memoryLi', x-property-mappings.get('memory_li'));
        System.assertEquals('hdLi', x-property-mappings.get('hd_li'));
        System.assertEquals('bandwidthLi', x-property-mappings.get('bandwidth_li'));
        System.assertEquals('ipsLi', x-property-mappings.get('ips_li'));
        System.assertEquals('osLi', x-property-mappings.get('os_li'));
        System.assertEquals('cpLi', x-property-mappings.get('cp_li'));
        System.assertEquals('raidLi', x-property-mappings.get('raid_li'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASConfigLists configLists = new OASConfigLists();
        System.assertEquals(new Map<String, OASCpu>(), configLists.cpuLi);
        System.assertEquals(new Map<String, Map<String, OASMemoryOption>>(), configLists.memoryLi);
        System.assertEquals(new Map<String, Map<String, OASHardDrive>>(), configLists.hdLi);
        System.assertEquals(new Map<String, OASBandwidth>(), configLists.bandwidthLi);
        System.assertEquals(new Map<String, OASIpBlock>(), configLists.ipsLi);
        System.assertEquals(new Map<String, OASOperatingSystem>(), configLists.osLi);
        System.assertEquals(new Map<String, OASControlPanel>(), configLists.cpLi);
        System.assertEquals(new List<OASRaidOption>(), configLists.raidLi);
    }
}
