package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class IdBackupsBody1   {

  private @Valid String file = null;

  /**
   * The backup filename to download.
   **/
  public IdBackupsBody1 file(String file) {
    this.file = file;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "The backup filename to download.")
  @JsonProperty("file")
  @NotNull

  public String getFile() {
    return file;
  }
  public void setFile(String file) {
    this.file = file;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IdBackupsBody1 idBackupsBody1 = (IdBackupsBody1) o;
    return Objects.equals(file, idBackupsBody1.file);
  }

  @Override
  public int hashCode() {
    return Objects.hash(file);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IdBackupsBody1 {\n");
    
    sb.append("    file: ").append(toIndentedString(file)).append("\n");
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
