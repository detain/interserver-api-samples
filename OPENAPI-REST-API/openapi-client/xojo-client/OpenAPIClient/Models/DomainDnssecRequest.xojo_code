#tag Class
Protected Class DomainDnssecRequest

	#tag Property, Flags = &h0
		#tag Note
			List of DNSSEC algorithm IDs for each record.
		#tag EndNote
		algorithm() As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of digest type IDs for each record.
		#tag EndNote
		digest_type() As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of hex digests for each record.
		#tag EndNote
		digest() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of key tag values corresponding to each record.
		#tag EndNote
		key_tag() As Integer
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
			Name="algorithm"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="digest_type"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="digest"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="key_tag"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


