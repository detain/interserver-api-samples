package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class VpsOrderLocationStock1   {
  private Boolean kvm = null;
  private Boolean kvmstorage = null;
  private Boolean hyperv = null;

  /**
   **/
  
  @Schema(example = "true", description = "")
  @JsonProperty("kvm")
  @NotNull
  public Boolean isKvm() {
    return kvm;
  }
  public void setKvm(Boolean kvm) {
    this.kvm = kvm;
  }

  /**
   **/
  
  @Schema(example = "true", description = "")
  @JsonProperty("kvmstorage")
  @NotNull
  public Boolean isKvmstorage() {
    return kvmstorage;
  }
  public void setKvmstorage(Boolean kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  /**
   **/
  
  @Schema(example = "true", description = "")
  @JsonProperty("hyperv")
  @NotNull
  public Boolean isHyperv() {
    return hyperv;
  }
  public void setHyperv(Boolean hyperv) {
    this.hyperv = hyperv;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderLocationStock1 vpsOrderLocationStock1 = (VpsOrderLocationStock1) o;
    return Objects.equals(kvm, vpsOrderLocationStock1.kvm) &&
        Objects.equals(kvmstorage, vpsOrderLocationStock1.kvmstorage) &&
        Objects.equals(hyperv, vpsOrderLocationStock1.hyperv);
  }

  @Override
  public int hashCode() {
    return Objects.hash(kvm, kvmstorage, hyperv);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderLocationStock1 {\n");
    
    sb.append("    kvm: ").append(toIndentedString(kvm)).append("\n");
    sb.append("    kvmstorage: ").append(toIndentedString(kvmstorage)).append("\n");
    sb.append("    hyperv: ").append(toIndentedString(hyperv)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
