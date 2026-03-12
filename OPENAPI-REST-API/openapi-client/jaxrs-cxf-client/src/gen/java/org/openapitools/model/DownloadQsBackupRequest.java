package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DownloadQsBackupRequest  {
  
 /**
  * The backup filename to download.
  */
  @ApiModelProperty(required = true, value = "The backup filename to download.")

  private String _file;
 /**
   * The backup filename to download.
   * @return _file
  **/
  @JsonProperty("file")
  public String getFile() {
    return _file;
  }

  public void setFile(String _file) {
    this._file = _file;
  }

  public DownloadQsBackupRequest _file(String _file) {
    this._file = _file;
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
    DownloadQsBackupRequest downloadQsBackupRequest = (DownloadQsBackupRequest) o;
    return Objects.equals(this._file, downloadQsBackupRequest._file);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_file);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DownloadQsBackupRequest {\n");
    
    sb.append("    _file: ").append(toIndentedString(_file)).append("\n");
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

