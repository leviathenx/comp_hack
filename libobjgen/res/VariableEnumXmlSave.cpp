{
    tinyxml2::XMLElement *pMember = doc.NewElement(@ELEMENT_NAME@);
    pMember->SetAttribute("name", @VAR_NAME@);

    tinyxml2::XMLText *pText = doc.NewText(GetEnumString(@GETTER@).c_str());
    pMember->InsertEndChild(pText);

    @PARENT@->InsertEndChild(pMember);
}