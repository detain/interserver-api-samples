@isTest
private class OASCpuTest {
    @isTest
    private static void equalsSameInstance() {
        OASCpu cpu1 = OASCpu.getExample();
        OASCpu cpu2 = cpu1;
        OASCpu cpu3 = new OASCpu();
        OASCpu cpu4 = cpu3;

        System.assert(cpu1.equals(cpu2));
        System.assert(cpu2.equals(cpu1));
        System.assert(cpu1.equals(cpu1));
        System.assert(cpu3.equals(cpu4));
        System.assert(cpu4.equals(cpu3));
        System.assert(cpu3.equals(cpu3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCpu cpu1 = OASCpu.getExample();
        OASCpu cpu2 = OASCpu.getExample();
        OASCpu cpu3 = new OASCpu();
        OASCpu cpu4 = new OASCpu();

        System.assert(cpu1.equals(cpu2));
        System.assert(cpu2.equals(cpu1));
        System.assert(cpu3.equals(cpu4));
        System.assert(cpu4.equals(cpu3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCpu cpu1 = OASCpu.getExample();
        OASCpu cpu2 = new OASCpu();

        System.assertEquals(false, cpu1.equals('foo'));
        System.assertEquals(false, cpu2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCpu cpu1 = OASCpu.getExample();
        OASCpu cpu2 = new OASCpu();
        OASCpu cpu3;

        System.assertEquals(false, cpu1.equals(cpu3));
        System.assertEquals(false, cpu2.equals(cpu3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCpu cpu1 = OASCpu.getExample();
        OASCpu cpu2 = new OASCpu();

        System.assertEquals(cpu1.hashCode(), cpu1.hashCode());
        System.assertEquals(cpu2.hashCode(), cpu2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCpu cpu1 = OASCpu.getExample();
        OASCpu cpu2 = OASCpu.getExample();
        OASCpu cpu3 = new OASCpu();
        OASCpu cpu4 = new OASCpu();

        System.assert(cpu1.equals(cpu2));
        System.assert(cpu3.equals(cpu4));
        System.assertEquals(cpu1.hashCode(), cpu2.hashCode());
        System.assertEquals(cpu3.hashCode(), cpu4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASCpu cpu = new OASCpu();
        Map<String, String> x-property-mappings = cpu.getx-property-mappings();
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
    }
}
