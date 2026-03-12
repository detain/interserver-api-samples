package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsOrderTemplatesHyperv;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Templates
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Templates")

public class VpsOrderTemplates   {
  private VpsOrderTemplatesHyperv hyperv = null;

  /**
   **/
  public VpsOrderTemplates hyperv(VpsOrderTemplatesHyperv hyperv) {
    this.hyperv = hyperv;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("hyperv")
  @NotNull
  @Valid
  public VpsOrderTemplatesHyperv getHyperv() {
    return hyperv;
  }
  public void setHyperv(VpsOrderTemplatesHyperv hyperv) {
    this.hyperv = hyperv;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderTemplates vpsOrderTemplates = (VpsOrderTemplates) o;
    return Objects.equals(hyperv, vpsOrderTemplates.hyperv);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hyperv);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderTemplates {\n");
    
    sb.append("    hyperv: ").append(toIndentedString(hyperv)).append("\n");
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
