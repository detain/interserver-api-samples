package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * (optional) File attachments to include in the email.  The file contents must be base64
 **/
@Schema(description="(optional) File attachments to include in the email.  The file contents must be base64")
public class MailAttachment   {
  
  @Schema(example = "message.txt", required = true, description = "The filename of the attached file.")
 /**
   * The filename of the attached file.  
  **/
  private String filename = null;
  
  @Schema(example = "aGVsbG8gdGhlcmUK", required = true, description = "The file contents base64 encoded")
 /**
   * The file contents base64 encoded  
  **/
  private String data = null;
 /**
   * The filename of the attached file.
   * @return filename
  **/
  @JsonProperty("filename")
  public String getFilename() {
    return filename;
  }

  public void setFilename(String filename) {
    this.filename = filename;
  }

  public MailAttachment filename(String filename) {
    this.filename = filename;
    return this;
  }

 /**
   * The file contents base64 encoded
   * @return data
  **/
  @JsonProperty("data")
  public String getData() {
    return data;
  }

  public void setData(String data) {
    this.data = data;
  }

  public MailAttachment data(String data) {
    this.data = data;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailAttachment {\n");
    
    sb.append("    filename: ").append(toIndentedString(filename)).append("\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
