package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * The data for a email deny rule record.
 */
@Schema(description = "The data for a email deny rule record.")
@Validated
@Introspected

public class DenyRuleNew   {
  @JsonProperty("user")
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

    @Override
    @JsonValue
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
  @JsonProperty("type")
  private TypeEnum type = null;

  @JsonProperty("data")
  private String data = null;

  public DenyRuleNew user(String user) {
    this.user = user;
    return this;
  }

  /**
   * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
   * @return user
  **/
  @Schema(example = "mb20682", description = "Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.")
  @NotNull

  public String getUser() {
    return user;
  }

  public void setUser(String user) {
    this.user = user;
  }

  public DenyRuleNew type(TypeEnum type) {
    this.type = type;
    return this;
  }

  /**
   * The type of deny rule.
   * @return type
  **/
  @Schema(example = "email", required = true, description = "The type of deny rule.")
  @NotNull

  public TypeEnum getType() {
    return type;
  }

  public void setType(TypeEnum type) {
    this.type = type;
  }

  public DenyRuleNew data(String data) {
    this.data = data;
    return this;
  }

  /**
   * The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
   * @return data
  **/
  @Schema(example = "domeinwo@server.guesshost.net", required = true, description = "The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.")
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
    return Objects.equals(this.user, denyRuleNew.user) &&
        Objects.equals(this.type, denyRuleNew.type) &&
        Objects.equals(this.data, denyRuleNew.data);
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
