@isTest
private class OASCpuWithDefaultsTest {
    @isTest
    private static void equalsSameInstance() {
        OASCpuWithDefaults cpuWithDefaults1 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults2 = cpuWithDefaults1;
        OASCpuWithDefaults cpuWithDefaults3 = new OASCpuWithDefaults();
        OASCpuWithDefaults cpuWithDefaults4 = cpuWithDefaults3;

        System.assert(cpuWithDefaults1.equals(cpuWithDefaults2));
        System.assert(cpuWithDefaults2.equals(cpuWithDefaults1));
        System.assert(cpuWithDefaults1.equals(cpuWithDefaults1));
        System.assert(cpuWithDefaults3.equals(cpuWithDefaults4));
        System.assert(cpuWithDefaults4.equals(cpuWithDefaults3));
        System.assert(cpuWithDefaults3.equals(cpuWithDefaults3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCpuWithDefaults cpuWithDefaults1 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults2 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults3 = new OASCpuWithDefaults();
        OASCpuWithDefaults cpuWithDefaults4 = new OASCpuWithDefaults();

        System.assert(cpuWithDefaults1.equals(cpuWithDefaults2));
        System.assert(cpuWithDefaults2.equals(cpuWithDefaults1));
        System.assert(cpuWithDefaults3.equals(cpuWithDefaults4));
        System.assert(cpuWithDefaults4.equals(cpuWithDefaults3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCpuWithDefaults cpuWithDefaults1 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults2 = new OASCpuWithDefaults();

        System.assertEquals(false, cpuWithDefaults1.equals('foo'));
        System.assertEquals(false, cpuWithDefaults2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCpuWithDefaults cpuWithDefaults1 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults2 = new OASCpuWithDefaults();
        OASCpuWithDefaults cpuWithDefaults3;

        System.assertEquals(false, cpuWithDefaults1.equals(cpuWithDefaults3));
        System.assertEquals(false, cpuWithDefaults2.equals(cpuWithDefaults3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCpuWithDefaults cpuWithDefaults1 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults2 = new OASCpuWithDefaults();

        System.assertEquals(cpuWithDefaults1.hashCode(), cpuWithDefaults1.hashCode());
        System.assertEquals(cpuWithDefaults2.hashCode(), cpuWithDefaults2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCpuWithDefaults cpuWithDefaults1 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults2 = OASCpuWithDefaults.getExample();
        OASCpuWithDefaults cpuWithDefaults3 = new OASCpuWithDefaults();
        OASCpuWithDefaults cpuWithDefaults4 = new OASCpuWithDefaults();

        System.assert(cpuWithDefaults1.equals(cpuWithDefaults2));
        System.assert(cpuWithDefaults3.equals(cpuWithDefaults4));
        System.assertEquals(cpuWithDefaults1.hashCode(), cpuWithDefaults2.hashCode());
        System.assertEquals(cpuWithDefaults3.hashCode(), cpuWithDefaults4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASCpuWithDefaults cpuWithDefaults = new OASCpuWithDefaults();
        Map<String, String> x-property-mappings = cpuWithDefaults.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('numCores', x-property-mappings.get('num_cores'));
        System.assertEquals('numCpus', x-property-mappings.get('num_cpus'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
        System.assertEquals('maxRam', x-property-mappings.get('max_ram'));
        System.assertEquals('minRam', x-property-mappings.get('min_ram'));
        System.assertEquals('maxLff', x-property-mappings.get('max_lff'));
        System.assertEquals('maxSff', x-property-mappings.get('max_sff'));
        System.assertEquals('maxNve', x-property-mappings.get('max_nve'));
        System.assertEquals('memoryDet', x-property-mappings.get('memory_det'));
        System.assertEquals('hdDet', x-property-mappings.get('hd_det'));
        System.assertEquals('monthlyFee', x-property-mappings.get('monthly_fee'));
    }
}
