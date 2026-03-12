//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_row.g.dart';

/// A result row from the `Servers` `GET` request.
///
/// Properties:
/// * [serverId] - The id of the server.
/// * [accountLid] - The account lid of the server.
/// * [serverHostname] - The hostname of the server.
/// * [serverStatus] - The status of the server.
@BuiltValue()
abstract class ServerRow implements Built<ServerRow, ServerRowBuilder> {
  /// The id of the server.
  @BuiltValueField(wireName: r'server_id')
  String get serverId;

  /// The account lid of the server.
  @BuiltValueField(wireName: r'account_lid')
  String get accountLid;

  /// The hostname of the server.
  @BuiltValueField(wireName: r'server_hostname')
  String get serverHostname;

  /// The status of the server.
  @BuiltValueField(wireName: r'server_status')
  String get serverStatus;

  ServerRow._();

  factory ServerRow([void updates(ServerRowBuilder b)]) = _$ServerRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerRow> get serializer => _$ServerRowSerializer();
}

class _$ServerRowSerializer implements PrimitiveSerializer<ServerRow> {
  @override
  final Iterable<Type> types = const [ServerRow, _$ServerRow];

  @override
  final String wireName = r'ServerRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'server_id';
    yield serializers.serialize(
      object.serverId,
      specifiedType: const FullType(String),
    );
    yield r'account_lid';
    yield serializers.serialize(
      object.accountLid,
      specifiedType: const FullType(String),
    );
    yield r'server_hostname';
    yield serializers.serialize(
      object.serverHostname,
      specifiedType: const FullType(String),
    );
    yield r'server_status';
    yield serializers.serialize(
      object.serverStatus,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'server_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverId = valueDes;
          break;
        case r'account_lid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.accountLid = valueDes;
          break;
        case r'server_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverHostname = valueDes;
          break;
        case r'server_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverStatus = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerRowBuilder();
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

