package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Platform Names")

public class VpsOrderPlatformNames   {
  private String kvm = null;
  private String kvmstorage = null;
  private String hyperv = null;

  /**
   **/
  
  @Schema(example = "KVM", description = "")
  @JsonProperty("kvm")
  @NotNull
  public String getKvm() {
    return kvm;
  }
  public void setKvm(String kvm) {
    this.kvm = kvm;
  }

  /**
   **/
  
  @Schema(example = "KVM Storage", description = "")
  @JsonProperty("kvmstorage")
  @NotNull
  public String getKvmstorage() {
    return kvmstorage;
  }
  public void setKvmstorage(String kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  /**
   **/
  
  @Schema(example = "HyperV", description = "")
  @JsonProperty("hyperv")
  @NotNull
  public String getHyperv() {
    return hyperv;
  }
  public void setHyperv(String hyperv) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
