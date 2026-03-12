package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single add-on item associated with a QuickServer service.
 */
@ApiModel(description="A single add-on item associated with a QuickServer service.")

public class QuickserverAddonsRow  {
  
 /**
  * Description
  */
  @ApiModelProperty(example = "Additional IP Address", value = "Description")

  private String desc;

 /**
  * Value
  */
  @ApiModelProperty(example = "", value = "Value")

  private String value;
 /**
   * Description
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public QuickserverAddonsRow desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * Value
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public QuickserverAddonsRow value(String value) {
    this.value = value;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverAddonsRow quickserverAddonsRow = (QuickserverAddonsRow) o;
    return Objects.equals(this.desc, quickserverAddonsRow.desc) &&
        Objects.equals(this.value, quickserverAddonsRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverAddonsRow {\n");
    
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

