package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The data for a email deny rule record.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The data for a email deny rule record.")

public class DenyRuleNew   {

  private @Valid String user = null;

public enum TypeEnum {

    DOMAIN(String.valueOf("domain")), EMAIL(String.valueOf("email")), STARTSWITH(String.valueOf("startswith")), DESTINATION(String.valueOf("destination"));


    private String value;

    TypeEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static TypeEnum fromValue(String v) {
        for (TypeEnum b : TypeEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid TypeEnum type = null;

  private @Valid String data = null;

  /**
   * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
   **/
  public DenyRuleNew user(String user) {
    this.user = user;
    return this;
  }

  
  @ApiModelProperty(example = "mb20682", value = "Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.")
  @JsonProperty("user")
  @NotNull

  public String getUser() {
    return user;
  }
  public void setUser(String user) {
    this.user = user;
  }

  /**
   * The type of deny rule.
   **/
  public DenyRuleNew type(TypeEnum type) {
    this.type = type;
    return this;
  }

  
  @ApiModelProperty(example = "email", required = true, value = "The type of deny rule.")
  @JsonProperty("type")
  @NotNull

  public TypeEnum getType() {
    return type;
  }
  public void setType(TypeEnum type) {
    this.type = type;
  }

  /**
   * The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
   **/
  public DenyRuleNew data(String data) {
    this.data = data;
    return this;
  }

  
  @ApiModelProperty(example = "domeinwo@server.guesshost.net", required = true, value = "The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.")
  @JsonProperty("data")
  @NotNull

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
    DenyRuleNew denyRuleNew = (DenyRuleNew) o;
    return Objects.equals(user, denyRuleNew.user) &&
        Objects.equals(type, denyRuleNew.type) &&
        Objects.equals(data, denyRuleNew.data);
  }

  @Override
  public int hashCode() {
    return Objects.hash(user, type, data);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
