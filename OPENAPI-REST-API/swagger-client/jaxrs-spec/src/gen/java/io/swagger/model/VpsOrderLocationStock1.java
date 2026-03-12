package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsOrderLocationStock1   {

  private @Valid Boolean kvm = null;

  private @Valid Boolean kvmstorage = null;

  private @Valid Boolean hyperv = null;

  /**
   **/
  public VpsOrderLocationStock1 kvm(Boolean kvm) {
    this.kvm = kvm;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "")
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
  public VpsOrderLocationStock1 kvmstorage(Boolean kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "")
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
  public VpsOrderLocationStock1 hyperv(Boolean hyperv) {
    this.hyperv = hyperv;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "")
  @JsonProperty("hyperv")
  @NotNull

  public Boolean isHyperv() {
    return hyperv;
  }
  public void setHyperv(Boolean hyperv) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
