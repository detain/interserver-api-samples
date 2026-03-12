package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * The data for a email deny rule record.
 **/
@Schema(description="The data for a email deny rule record.")
public class DenyRuleNew   {
  
  @Schema(example = "mb20682", description = "Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.")
 /**
   * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.  
  **/
  private String user = null;
  public enum TypeEnum {
    DOMAIN("domain"),
    EMAIL("email"),
    STARTSWITH("startswith"),
    DESTINATION("destination");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
    @JsonCreator
    public static TypeEnum fromValue(String text) {
      for (TypeEnum b : TypeEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }  
  @Schema(example = "email", required = true, description = "The type of deny rule.")
 /**
   * The type of deny rule.  
  **/
  private TypeEnum type = null;
  
  @Schema(example = "domeinwo@server.guesshost.net", required = true, description = "The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.")
 /**
   * The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.  
  **/
  private String data = null;
 /**
   * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
   * @return user
  **/
  @JsonProperty("user")
  public String getUser() {
    return user;
  }

  public void setUser(String user) {
    this.user = user;
  }

  public DenyRuleNew user(String user) {
    this.user = user;
    return this;
  }

 /**
   * The type of deny rule.
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    if (type == null) {
      return null;
    }
    return type.getValue();
  }

  public void setType(TypeEnum type) {
    this.type = type;
  }

  public DenyRuleNew type(TypeEnum type) {
    this.type = type;
    return this;
  }

 /**
   * The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
   * @return data
  **/
  @JsonProperty("data")
  public String getData() {
    return data;
  }

  public void setData(String data) {
    this.data = data;
  }

  public DenyRuleNew data(String data) {
    this.data = data;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DenyRuleNew {\n");
    
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
