package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Information about a single ticket.")

public class TicketsRow   {
  private String title = null;  private String ticketmaskid = null;  private String lastreplier = null;  private String status = null;  private String priority = null;  private Integer totalReplies = null;  private String lastactivity = null;  private String departmenttitle = null;  private Integer ticketid = null;  private String canClose = null;  private Object attachments = null;  private String statusText = null;  private Boolean checked = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("title")
  @NotNull
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("ticketmaskid")
  @NotNull
  public String getTicketmaskid() {
    return ticketmaskid;
  }
  public void setTicketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("lastreplier")
  @NotNull
  public String getLastreplier() {
    return lastreplier;
  }
  public void setLastreplier(String lastreplier) {
    this.lastreplier = lastreplier;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("priority")
  @NotNull
  public String getPriority() {
    return priority;
  }
  public void setPriority(String priority) {
    this.priority = priority;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("total_replies")
  @NotNull
  public Integer getTotalReplies() {
    return totalReplies;
  }
  public void setTotalReplies(Integer totalReplies) {
    this.totalReplies = totalReplies;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("lastactivity")
  @NotNull
  public String getLastactivity() {
    return lastactivity;
  }
  public void setLastactivity(String lastactivity) {
    this.lastactivity = lastactivity;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("departmenttitle")
  @NotNull
  public String getDepartmenttitle() {
    return departmenttitle;
  }
  public void setDepartmenttitle(String departmenttitle) {
    this.departmenttitle = departmenttitle;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("ticketid")
  @NotNull
  public Integer getTicketid() {
    return ticketid;
  }
  public void setTicketid(Integer ticketid) {
    this.ticketid = ticketid;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("can_close")
  @NotNull
  public String getCanClose() {
    return canClose;
  }
  public void setCanClose(String canClose) {
    this.canClose = canClose;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("attachments")
  @NotNull
  public Object getAttachments() {
    return attachments;
  }
  public void setAttachments(Object attachments) {
    this.attachments = attachments;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("status_text")
  @NotNull
  public String getStatusText() {
    return statusText;
  }
  public void setStatusText(String statusText) {
    this.statusText = statusText;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("checked")
  @NotNull
  public Boolean isChecked() {
    return checked;
  }
  public void setChecked(Boolean checked) {
    this.checked = checked;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketsRow ticketsRow = (TicketsRow) o;
    return Objects.equals(title, ticketsRow.title) &&
        Objects.equals(ticketmaskid, ticketsRow.ticketmaskid) &&
        Objects.equals(lastreplier, ticketsRow.lastreplier) &&
        Objects.equals(status, ticketsRow.status) &&
        Objects.equals(priority, ticketsRow.priority) &&
        Objects.equals(totalReplies, ticketsRow.totalReplies) &&
        Objects.equals(lastactivity, ticketsRow.lastactivity) &&
        Objects.equals(departmenttitle, ticketsRow.departmenttitle) &&
        Objects.equals(ticketid, ticketsRow.ticketid) &&
        Objects.equals(canClose, ticketsRow.canClose) &&
        Objects.equals(attachments, ticketsRow.attachments) &&
        Objects.equals(statusText, ticketsRow.statusText) &&
        Objects.equals(checked, ticketsRow.checked);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, ticketmaskid, lastreplier, status, priority, totalReplies, lastactivity, departmenttitle, ticketid, canClose, attachments, statusText, checked);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketsRow {\n");
    
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    ticketmaskid: ").append(toIndentedString(ticketmaskid)).append("\n");
    sb.append("    lastreplier: ").append(toIndentedString(lastreplier)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    priority: ").append(toIndentedString(priority)).append("\n");
    sb.append("    totalReplies: ").append(toIndentedString(totalReplies)).append("\n");
    sb.append("    lastactivity: ").append(toIndentedString(lastactivity)).append("\n");
    sb.append("    departmenttitle: ").append(toIndentedString(departmenttitle)).append("\n");
    sb.append("    ticketid: ").append(toIndentedString(ticketid)).append("\n");
    sb.append("    canClose: ").append(toIndentedString(canClose)).append("\n");
    sb.append("    attachments: ").append(toIndentedString(attachments)).append("\n");
    sb.append("    statusText: ").append(toIndentedString(statusText)).append("\n");
    sb.append("    checked: ").append(toIndentedString(checked)).append("\n");
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
