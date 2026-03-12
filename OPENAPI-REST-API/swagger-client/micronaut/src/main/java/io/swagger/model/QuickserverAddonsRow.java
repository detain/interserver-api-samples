package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A single add-on item associated with a QuickServer service.
 */
@Schema(description = "A single add-on item associated with a QuickServer service.")
@Validated
@Introspected

public class QuickserverAddonsRow   {
  @JsonProperty("desc")
  private String desc = null;

  @JsonProperty("value")
  private String value = null;

  public QuickserverAddonsRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  /**
   * Description
   * @return desc
  **/
  @Schema(example = "Additional IP Address", description = "Description")
  @NotNull

  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public QuickserverAddonsRow value(String value) {
    this.value = value;
    return this;
  }

  /**
   * Value
   * @return value
  **/
  @Schema(description = "Value")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
