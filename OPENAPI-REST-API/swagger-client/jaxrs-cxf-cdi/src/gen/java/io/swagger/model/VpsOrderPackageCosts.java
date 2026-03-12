package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Package Costs
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Package Costs")

public class VpsOrderPackageCosts   {
  private BigDecimal _57 = null;

  /**
   **/
  public VpsOrderPackageCosts _57(BigDecimal _57) {
    this._57 = _57;
    return this;
  }

  
  
  @Schema(example = "6", description = "")
  @JsonProperty("57")
  @NotNull
  @Valid
  public BigDecimal get57() {
    return _57;
  }
  public void set57(BigDecimal _57) {
    this._57 = _57;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderPackageCosts vpsOrderPackageCosts = (VpsOrderPackageCosts) o;
    return Objects.equals(_57, vpsOrderPackageCosts._57);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_57);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
