package io.swagger.model;

import io.swagger.model.DenyRuleNew;
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

public class DenyRuleRecord   {

  private @Valid Integer id = null;

  private @Valid String created = null;

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
   * The deny rule Id number.
   **/
  public DenyRuleRecord id(Integer id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "41124", required = true, value = "The deny rule Id number.")
  @JsonProperty("id")
  @NotNull

  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   * the date the rule was created.
   **/
  public DenyRuleRecord created(String created) {
    this.created = created;
    return this;
  }

  
  @ApiModelProperty(example = "2022-03-22 19:16:35", required = true, value = "the date the rule was created.")
  @JsonProperty("created")
  @NotNull

  public String getCreated() {
    return created;
  }
  public void setCreated(String created) {
    this.created = created;
  }

  /**
   * Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
   **/
  public DenyRuleRecord user(String user) {
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
  public DenyRuleRecord type(TypeEnum type) {
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
  public DenyRuleRecord data(String data) {
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
    DenyRuleRecord denyRuleRecord = (DenyRuleRecord) o;
    return Objects.equals(id, denyRuleRecord.id) &&
        Objects.equals(created, denyRuleRecord.created) &&
        Objects.equals(user, denyRuleRecord.user) &&
        Objects.equals(type, denyRuleRecord.type) &&
        Objects.equals(data, denyRuleRecord.data);
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
