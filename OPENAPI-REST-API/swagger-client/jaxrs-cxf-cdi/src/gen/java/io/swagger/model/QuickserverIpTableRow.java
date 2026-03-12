package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * A single row in the QuickServer IP information table.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A single row in the QuickServer IP information table.")

public class QuickserverIpTableRow   {
  private String desc = null;
  private String value = null;

  /**
   * Description
   **/
  public QuickserverIpTableRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  
  
  @Schema(example = "Netmask", description = "Description")
  @JsonProperty("desc")
  @NotNull
  public String getDesc() {
    return desc;
  }
  public void setDesc(String desc) {
    this.desc = desc;
  }

  /**
   * Value
   **/
  public QuickserverIpTableRow value(String value) {
    this.value = value;
    return this;
  }

  
  
  @Schema(description = "Value")
  @JsonProperty("value")
  @NotNull
  public String getValue() {
    return value;
  }
  public void setValue(String value) {
    this.value = value;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverIpTableRow quickserverIpTableRow = (QuickserverIpTableRow) o;
    return Objects.equals(desc, quickserverIpTableRow.desc) &&
        Objects.equals(value, quickserverIpTableRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverIpTableRow {\n");
    
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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
