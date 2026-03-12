package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Platform Names
 */
@ApiModel(description="Platform Names")

public class VpsOrderPlatformNames  {
  
  @ApiModelProperty(example = "KVM", value = "")

  private String kvm;

  @ApiModelProperty(example = "KVM Storage", value = "")

  private String kvmstorage;

  @ApiModelProperty(example = "HyperV", value = "")

  private String hyperv;
 /**
   * Get kvm
   * @return kvm
  **/
  @JsonProperty("kvm")
  public String getKvm() {
    return kvm;
  }

  public void setKvm(String kvm) {
    this.kvm = kvm;
  }

  public VpsOrderPlatformNames kvm(String kvm) {
    this.kvm = kvm;
    return this;
  }

 /**
   * Get kvmstorage
   * @return kvmstorage
  **/
  @JsonProperty("kvmstorage")
  public String getKvmstorage() {
    return kvmstorage;
  }

  public void setKvmstorage(String kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  public VpsOrderPlatformNames kvmstorage(String kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

 /**
   * Get hyperv
   * @return hyperv
  **/
  @JsonProperty("hyperv")
  public String getHyperv() {
    return hyperv;
  }

  public void setHyperv(String hyperv) {
    this.hyperv = hyperv;
  }

  public VpsOrderPlatformNames hyperv(String hyperv) {
    this.hyperv = hyperv;
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
    VpsOrderPlatformNames vpsOrderPlatformNames = (VpsOrderPlatformNames) o;
    return Objects.equals(this.kvm, vpsOrderPlatformNames.kvm) &&
        Objects.equals(this.kvmstorage, vpsOrderPlatformNames.kvmstorage) &&
        Objects.equals(this.hyperv, vpsOrderPlatformNames.hyperv);
  }

  @Override
  public int hashCode() {
    return Objects.hash(kvm, kvmstorage, hyperv);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPlatformNames {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

