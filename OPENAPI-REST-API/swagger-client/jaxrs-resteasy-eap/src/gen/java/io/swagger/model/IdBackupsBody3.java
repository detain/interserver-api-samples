package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class IdBackupsBody3   {
  private String file = null;

  /**
   * The backup filename to download.
   **/
  
  @Schema(required = true, description = "The backup filename to download.")
  @JsonProperty("file")
  @NotNull
  public String getFile() {
    return file;
  }
  public void setFile(String file) {
    this.file = file;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IdBackupsBody3 idBackupsBody3 = (IdBackupsBody3) o;
    return Objects.equals(file, idBackupsBody3.file);
  }

  @Override
  public int hashCode() {
    return Objects.hash(file);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IdBackupsBody3 {\n");
    
    sb.append("    file: ").append(toIndentedString(file)).append("\n");
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
