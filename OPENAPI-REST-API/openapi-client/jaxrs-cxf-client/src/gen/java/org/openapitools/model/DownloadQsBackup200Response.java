package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DownloadQsBackup200Response  {
  
  @ApiModelProperty(value = "")

  private String text;

 /**
  * A pre-signed download URL valid for 24 hours.
  */
  @ApiModelProperty(value = "A pre-signed download URL valid for 24 hours.")

  private String url;
 /**
   * Get text
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public DownloadQsBackup200Response text(String text) {
    this.text = text;
    return this;
  }

 /**
   * A pre-signed download URL valid for 24 hours.
   * @return url
  **/
  @JsonProperty("url")
  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public DownloadQsBackup200Response url(String url) {
    this.url = url;
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
    DownloadQsBackup200Response downloadQsBackup200Response = (DownloadQsBackup200Response) o;
    return Objects.equals(this.text, downloadQsBackup200Response.text) &&
        Objects.equals(this.url, downloadQsBackup200Response.url);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, url);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DownloadQsBackup200Response {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
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

