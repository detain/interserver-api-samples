package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Platform Names
 **/
@Schema(description = "Platform Names")


public class VpsOrderPlatformNames   {
  @JsonProperty("kvm")
  private String kvm = null;
  @JsonProperty("kvmstorage")
  private String kvmstorage = null;
  @JsonProperty("hyperv")
  private String hyperv = null;
  /**
   **/
  public VpsOrderPlatformNames kvm(String kvm) {
    this.kvm = kvm;
    return this;
  }

  
  @Schema(example = "KVM", description = "")
  @JsonProperty("kvm")
  public String getKvm() {
    return kvm;
  }
  public void setKvm(String kvm) {
    this.kvm = kvm;
  }

  /**
   **/
  public VpsOrderPlatformNames kvmstorage(String kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

  
  @Schema(example = "KVM Storage", description = "")
  @JsonProperty("kvmstorage")
  public String getKvmstorage() {
    return kvmstorage;
  }
  public void setKvmstorage(String kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  /**
   **/
  public VpsOrderPlatformNames hyperv(String hyperv) {
    this.hyperv = hyperv;
    return this;
  }

  
  @Schema(example = "HyperV", description = "")
  @JsonProperty("hyperv")
  public String getHyperv() {
    return hyperv;
  }
  public void setHyperv(String hyperv) {
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
    VpsOrderPlatformNames vpsOrderPlatformNames = (VpsOrderPlatformNames) o;
    return Objects.equals(kvm, vpsOrderPlatformNames.kvm) &&
        Objects.equals(kvmstorage, vpsOrderPlatformNames.kvmstorage) &&
        Objects.equals(hyperv, vpsOrderPlatformNames.hyperv);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
