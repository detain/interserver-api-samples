//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_config_ids.dart';
import 'package:openapi/src/model/server_order_field_labels.dart';
import 'package:openapi/src/model/server_order_raid.dart';
import 'package:openapi/src/model/server_order_os_li.dart';
import 'package:openapi/src/model/server_order_bandwidth_li.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/server_order_cpu_li.dart';
import 'package:openapi/src/model/server_order_form_values.dart';
import 'package:openapi/src/model/server_order_memory_li.dart';
import 'package:openapi/src/model/server_order_cp_li.dart';
import 'package:openapi/src/model/server_order_ips_li.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order.g.dart';

/// Object representing a server order.
///
/// Properties:
/// * [formValues] 
/// * [configIds] 
/// * [cpu] - Number of CPUs for the server order.
/// * [fieldLabel] 
/// * [cpuLi] 
/// * [memoryLi] 
/// * [bandwidthLi] 
/// * [ipsLi] 
/// * [osLi] 
/// * [cpLi] 
/// * [raidLi] - RAID options for the server order.
@BuiltValue()
abstract class ServerOrder implements Built<ServerOrder, ServerOrderBuilder> {
  @BuiltValueField(wireName: r'form_values')
  ServerOrderFormValues? get formValues;

  @BuiltValueField(wireName: r'config_ids')
  ServerOrderConfigIds? get configIds;

  /// Number of CPUs for the server order.
  @BuiltValueField(wireName: r'cpu')
  int? get cpu;

  @BuiltValueField(wireName: r'field_label')
  ServerOrderFieldLabels? get fieldLabel;

  @BuiltValueField(wireName: r'cpu_li')
  ServerOrderCpuLi? get cpuLi;

  @BuiltValueField(wireName: r'memory_li')
  ServerOrderMemoryLi? get memoryLi;

  @BuiltValueField(wireName: r'bandwidth_li')
  ServerOrderBandwidthLi? get bandwidthLi;

  @BuiltValueField(wireName: r'ips_li')
  ServerOrderIpsLi? get ipsLi;

  @BuiltValueField(wireName: r'os_li')
  ServerOrderOsLi? get osLi;

  @BuiltValueField(wireName: r'cp_li')
  ServerOrderCpLi? get cpLi;

  /// RAID options for the server order.
  @BuiltValueField(wireName: r'raid_li')
  BuiltList<ServerOrderRAID>? get raidLi;

  ServerOrder._();

  factory ServerOrder([void updates(ServerOrderBuilder b)]) = _$ServerOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrder> get serializer => _$ServerOrderSerializer();
}

class _$ServerOrderSerializer implements PrimitiveSerializer<ServerOrder> {
  @override
  final Iterable<Type> types = const [ServerOrder, _$ServerOrder];

  @override
  final String wireName = r'ServerOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.formValues != null) {
      yield r'form_values';
      yield serializers.serialize(
        object.formValues,
        specifiedType: const FullType(ServerOrderFormValues),
      );
    }
    if (object.configIds != null) {
      yield r'config_ids';
      yield serializers.serialize(
        object.configIds,
        specifiedType: const FullType(ServerOrderConfigIds),
      );
    }
    if (object.cpu != null) {
      yield r'cpu';
      yield serializers.serialize(
        object.cpu,
        specifiedType: const FullType(int),
      );
    }
    if (object.fieldLabel != null) {
      yield r'field_label';
      yield serializers.serialize(
        object.fieldLabel,
        specifiedType: const FullType(ServerOrderFieldLabels),
      );
    }
    if (object.cpuLi != null) {
      yield r'cpu_li';
      yield serializers.serialize(
        object.cpuLi,
        specifiedType: const FullType(ServerOrderCpuLi),
      );
    }
    if (object.memoryLi != null) {
      yield r'memory_li';
      yield serializers.serialize(
        object.memoryLi,
        specifiedType: const FullType(ServerOrderMemoryLi),
      );
    }
    if (object.bandwidthLi != null) {
      yield r'bandwidth_li';
      yield serializers.serialize(
        object.bandwidthLi,
        specifiedType: const FullType(ServerOrderBandwidthLi),
      );
    }
    if (object.ipsLi != null) {
      yield r'ips_li';
      yield serializers.serialize(
        object.ipsLi,
        specifiedType: const FullType(ServerOrderIpsLi),
      );
    }
    if (object.osLi != null) {
      yield r'os_li';
      yield serializers.serialize(
        object.osLi,
        specifiedType: const FullType(ServerOrderOsLi),
      );
    }
    if (object.cpLi != null) {
      yield r'cp_li';
      yield serializers.serialize(
        object.cpLi,
        specifiedType: const FullType(ServerOrderCpLi),
      );
    }
    if (object.raidLi != null) {
      yield r'raid_li';
      yield serializers.serialize(
        object.raidLi,
        specifiedType: const FullType(BuiltList, [FullType(ServerOrderRAID)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'form_values':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFormValues),
          ) as ServerOrderFormValues;
          result.formValues.replace(valueDes);
          break;
        case r'config_ids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderConfigIds),
          ) as ServerOrderConfigIds;
          result.configIds.replace(valueDes);
          break;
        case r'cpu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cpu = valueDes;
          break;
        case r'field_label':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabels),
          ) as ServerOrderFieldLabels;
          result.fieldLabel.replace(valueDes);
          break;
        case r'cpu_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderCpuLi),
          ) as ServerOrderCpuLi;
          result.cpuLi.replace(valueDes);
          break;
        case r'memory_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderMemoryLi),
          ) as ServerOrderMemoryLi;
          result.memoryLi.replace(valueDes);
          break;
        case r'bandwidth_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderBandwidthLi),
          ) as ServerOrderBandwidthLi;
          result.bandwidthLi.replace(valueDes);
          break;
        case r'ips_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderIpsLi),
          ) as ServerOrderIpsLi;
          result.ipsLi.replace(valueDes);
          break;
        case r'os_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderOsLi),
          ) as ServerOrderOsLi;
          result.osLi.replace(valueDes);
          break;
        case r'cp_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderCpLi),
          ) as ServerOrderCpLi;
          result.cpLi.replace(valueDes);
          break;
        case r'raid_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(ServerOrderRAID)]),
          ) as BuiltList<ServerOrderRAID>;
          result.raidLi.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderBuilder();
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

