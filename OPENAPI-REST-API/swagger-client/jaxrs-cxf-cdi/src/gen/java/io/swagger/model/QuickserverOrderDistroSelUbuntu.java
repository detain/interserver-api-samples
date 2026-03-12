package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class QuickserverOrderDistroSelUbuntu   {
  private String ubuntu = null;

  /**
   * Selected distribution for Ubuntu.
   **/
  public QuickserverOrderDistroSelUbuntu ubuntu(String ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }

  
  
  @Schema(example = "Ubuntu", description = "Selected distribution for Ubuntu.")
  @JsonProperty("Ubuntu")
  @NotNull
  public String getUbuntu() {
    return ubuntu;
  }
  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu = (QuickserverOrderDistroSelUbuntu) o;
    return Objects.equals(ubuntu, quickserverOrderDistroSelUbuntu.ubuntu);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ubuntu);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderDistroSelUbuntu {\n");
    
    sb.append("    ubuntu: ").append(toIndentedString(ubuntu)).append("\n");
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
