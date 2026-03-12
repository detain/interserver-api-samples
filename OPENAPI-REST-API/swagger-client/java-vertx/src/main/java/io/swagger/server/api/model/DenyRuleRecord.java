package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.server.api.model.DenyRuleNew;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * The data for a email deny rule record.
 */




public class DenyRuleRecord   {
  private Integer id = null;

  private String created = null;

  private String user = null;

  /**
   * The type of deny rule.
   */
  public enum TypeEnum {
    DOMAIN("domain"),
    EMAIL("email"),
    STARTSWITH("startswith"),
    DESTINATION("destination");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static TypeEnum fromValue(String value) {
      for (TypeEnum b : TypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }

  }
  private TypeEnum type = null;

  private String data = null;

  public DenyRuleRecord id(Integer id) {
    this.id = id;
    return this;
  }

  /**
   * The deny rule Id number.
   * @return id
   **/
    public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public DenyRuleRecord created(String created) {
    this.created = created;
    return this;
  }

  /**
   * the date the rule was created.
   * @return created
   **/
    public String getCreated() {
    return created;
  }

  public void setCreated(String created) {
    this.created = created;
  }

  public DenyRuleRecord user(String user) {
    this.user = user;
    return this;
  }

  /**
   * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
   * @return user
   **/
    public String getUser() {
    return user;
  }

  public void setUser(String user) {
    this.user = user;
  }

  public DenyRuleRecord type(TypeEnum type) {
    this.type = type;
    return this;
  }

  /**
   * The type of deny rule.
   * @return type
   **/
    public TypeEnum getType() {
    return type;
  }

  public void setType(TypeEnum type) {
    this.type = type;
  }

  public DenyRuleRecord data(String data) {
    this.data = data;
    return this;
  }

  /**
   * The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
   * @return data
   **/
    public String getData() {
    return data;
  }

  public void setData(String data) {
    this.data = data;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DenyRuleRecord denyRuleRecord = (DenyRuleRecord) o;
    return Objects.equals(this.id, denyRuleRecord.id) &&
        Objects.equals(this.created, denyRuleRecord.created) &&
        Objects.equals(this.user, denyRuleRecord.user) &&
        Objects.equals(this.type, denyRuleRecord.type) &&
        Objects.equals(this.data, denyRuleRecord.data);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, created, user, type, data);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DenyRuleRecord {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
