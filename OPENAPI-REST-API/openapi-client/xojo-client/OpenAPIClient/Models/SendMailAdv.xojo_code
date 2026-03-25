#tag Class
Protected Class SendMailAdv

	#tag Property, Flags = &h0
		#tag Note
			The subject or title of the email
		#tag EndNote
		subject As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The main email contents.
		#tag EndNote
		body As String
	#tag EndProperty


	#tag Property, Flags = &h0
		from As OpenAPIClient.Models.EmailAddressName
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			A list of destionation email addresses to send this to
		#tag EndNote
		Escapedto() As OpenAPIClient.Models.EmailAddressName
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			(optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
		#tag EndNote
		replyto() As OpenAPIClient.Models.EmailAddressName
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			(optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
		#tag EndNote
		cc() As OpenAPIClient.Models.EmailAddressName
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			(optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
		#tag EndNote
		bcc() As OpenAPIClient.Models.EmailAddressName
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			(optional) File attachments to include in the email.  The file contents must be base64 encoded!
		#tag EndNote
		attachments() As OpenAPIClient.Models.MailAttachment
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			(optional)  ID of the Mail order within our system to use as the Mail Account.
		#tag EndNote
		id As Xoson.O.OptionalInt64
	#tag EndProperty





	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="subject"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="body"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="from"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="EmailAddressName"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Escapedto"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="EmailAddressName"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="replyto"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="EmailAddressName"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cc"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="EmailAddressName"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bcc"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="EmailAddressName"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="attachments"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailAttachment"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Int64"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


