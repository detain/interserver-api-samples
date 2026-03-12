//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'cpu.g.dart';

/// A CPU option available for dedicated server ordering.
///
/// Properties:
/// * [id] 
/// * [shortDesc] 
/// * [longDesc] 
/// * [type] 
/// * [speed] 
/// * [numCores] 
/// * [numCpus] 
/// * [benchmark] 
/// * [monthlyPrice] 
/// * [monthlyPriceDisplay] 
/// * [maxRam] 
/// * [minRam] 
/// * [maxLff] 
/// * [maxSff] 
/// * [maxNve] 
/// * [visible] 
/// * [active] 
@BuiltValue(instantiable: false)
abstract class Cpu  {
  @BuiltValueField(wireName: r'id')
  int? get id;

  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  @BuiltValueField(wireName: r'type')
  String? get type;

  @BuiltValueField(wireName: r'speed')
  String? get speed;

  @BuiltValueField(wireName: r'num_cores')
  String? get numCores;

  @BuiltValueField(wireName: r'num_cpus')
  String? get numCpus;

  @BuiltValueField(wireName: r'benchmark')
  String? get benchmark;

  @BuiltValueField(wireName: r'monthly_price')
  num? get monthlyPrice;

  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  @BuiltValueField(wireName: r'max_ram')
  String? get maxRam;

  @BuiltValueField(wireName: r'min_ram')
  String? get minRam;

  @BuiltValueField(wireName: r'max_lff')
  String? get maxLff;

  @BuiltValueField(wireName: r'max_sff')
  String? get maxSff;

  @BuiltValueField(wireName: r'max_nve')
  String? get maxNve;

  @BuiltValueField(wireName: r'visible')
  String? get visible;

  @BuiltValueField(wireName: r'active')
  String? get active;

  @BuiltValueSerializer(custom: true)
  static Serializer<Cpu> get serializer => _$CpuSerializer();
}

class _$CpuSerializer implements PrimitiveSerializer<Cpu> {
  @override
  final Iterable<Type> types = const [Cpu];

  @override
  final String wireName = r'Cpu';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Cpu object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
    if (object.shortDesc != null) {
      yield r'short_desc';
      yield serializers.serialize(
        object.shortDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.longDesc != null) {
      yield r'long_desc';
      yield serializers.serialize(
        object.longDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(String),
      );
    }
    if (object.speed != null) {
      yield r'speed';
      yield serializers.serialize(
        object.speed,
        specifiedType: const FullType(String),
      );
    }
    if (object.numCores != null) {
      yield r'num_cores';
      yield serializers.serialize(
        object.numCores,
        specifiedType: const FullType(String),
      );
    }
    if (object.numCpus != null) {
      yield r'num_cpus';
      yield serializers.serialize(
        object.numCpus,
        specifiedType: const FullType(String),
      );
    }
    if (object.benchmark != null) {
      yield r'benchmark';
      yield serializers.serialize(
        object.benchmark,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPrice != null) {
      yield r'monthly_price';
      yield serializers.serialize(
        object.monthlyPrice,
        specifiedType: const FullType(num),
      );
    }
    if (object.monthlyPriceDisplay != null) {
      yield r'monthly_price_display';
      yield serializers.serialize(
        object.monthlyPriceDisplay,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxRam != null) {
      yield r'max_ram';
      yield serializers.serialize(
        object.maxRam,
        specifiedType: const FullType(String),
      );
    }
    if (object.minRam != null) {
      yield r'min_ram';
      yield serializers.serialize(
        object.minRam,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxLff != null) {
      yield r'max_lff';
      yield serializers.serialize(
        object.maxLff,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxSff != null) {
      yield r'max_sff';
      yield serializers.serialize(
        object.maxSff,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxNve != null) {
      yield r'max_nve';
      yield serializers.serialize(
        object.maxNve,
        specifiedType: const FullType(String),
      );
    }
    if (object.visible != null) {
      yield r'visible';
      yield serializers.serialize(
        object.visible,
        specifiedType: const FullType(String),
      );
    }
    if (object.active != null) {
      yield r'active';
      yield serializers.serialize(
        object.active,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Cpu object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  Cpu deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return serializers.deserialize(serialized, specifiedType: FullType($Cpu)) as $Cpu;
  }
}

/// a concrete implementation of [Cpu], since [Cpu] is not instantiable
@BuiltValue(instantiable: true)
abstract class $Cpu implements Cpu, Built<$Cpu, $CpuBuilder> {
  $Cpu._();

  factory $Cpu([void Function($CpuBuilder)? updates]) = _$$Cpu;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults($CpuBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<$Cpu> get serializer => _$$CpuSerializer();
}

class _$$CpuSerializer implements PrimitiveSerializer<$Cpu> {
  @override
  final Iterable<Type> types = const [$Cpu, _$$Cpu];

  @override
  final String wireName = r'$Cpu';

  @override
  Object serialize(
    Serializers serializers,
    $Cpu object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return serializers.serialize(object, specifiedType: FullType(Cpu))!;
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CpuBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'short_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.shortDesc = valueDes;
          break;
        case r'long_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.longDesc = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'speed':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.speed = valueDes;
          break;
        case r'num_cores':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.numCores = valueDes;
          break;
        case r'num_cpus':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.numCpus = valueDes;
          break;
        case r'benchmark':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.benchmark = valueDes;
          break;
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.monthlyPrice = valueDes;
          break;
        case r'monthly_price_display':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.monthlyPriceDisplay = valueDes;
          break;
        case r'max_ram':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxRam = valueDes;
          break;
        case r'min_ram':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.minRam = valueDes;
          break;
        case r'max_lff':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxLff = valueDes;
          break;
        case r'max_sff':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxSff = valueDes;
          break;
        case r'max_nve':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxNve = valueDes;
          break;
        case r'visible':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.visible = valueDes;
          break;
        case r'active':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.active = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  $Cpu deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = $CpuBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

