package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;

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
  * Package Costs
 **/
@Schema(description="Package Costs")
public class VpsOrderPackageCosts   {
  
  @Schema(example = "6", description = "")
  private BigDecimal _57 = null;
 /**
   * Get _57
   * @return _57
  **/
  @JsonProperty("57")
  @NotNull
  public BigDecimal get57() {
    return _57;
  }

  public void set57(BigDecimal _57) {
    this._57 = _57;
  }

  public VpsOrderPackageCosts _57(BigDecimal _57) {
    this._57 = _57;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPackageCosts {\n");
    
    sb.append("    _57: ").append(toIndentedString(_57)).append("\n");
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
