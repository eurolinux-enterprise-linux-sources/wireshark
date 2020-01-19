/******************************************************************************
** $Id$
**
** Copyright (C) 2006-2009 ascolab GmbH. All Rights Reserved.
** Web: http://www.ascolab.com
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Project: OpcUa Wireshark Plugin
**
** Description: OpcUa Complex Type Parser
**
** This file was autogenerated on 12.02.2013.
** DON'T MODIFY THIS FILE!
** XXX - well, except that you may have to.  See the README.
**
******************************************************************************/

#include <glib.h>
#include <epan/packet.h>


void parseNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseInstanceNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseTypeNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseObjectNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseObjectTypeNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseVariableNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseVariableTypeNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReferenceTypeNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMethodNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseViewNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDataTypeNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReferenceNode(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseArgument(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEnumValueType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseTimeZoneDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseApplicationDescription(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseRequestHeader(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseResponseHeader(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseUserTokenPolicy(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEndpointDescription(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseRegisteredServer(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseChannelSecurityToken(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSignedSoftwareCertificate(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSignatureData(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseUserIdentityToken(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAnonymousIdentityToken(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseUserNameIdentityToken(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseX509IdentityToken(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseIssuedIdentityToken(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseNodeAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseObjectAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseVariableAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMethodAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseObjectTypeAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseVariableTypeAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReferenceTypeAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDataTypeAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseViewAttributes(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAddNodesItem(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAddNodesResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAddReferencesItem(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDeleteNodesItem(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDeleteReferencesItem(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseViewDescription(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseBrowseDescription(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReferenceDescription(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseBrowseResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseRelativePathElement(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseRelativePath(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseBrowsePath(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseBrowsePathTarget(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseBrowsePathResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEndpointConfiguration(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSupportedProfile(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSoftwareCertificate(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseQueryDataDescription(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseNodeTypeDescription(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseQueryDataSet(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseNodeReference(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseContentFilterElement(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseContentFilter(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseElementOperand(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseLiteralOperand(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAttributeOperand(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSimpleAttributeOperand(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseContentFilterElementResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseContentFilterResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseParsingResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReadValueId(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryReadValueId(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryReadResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReadEventDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReadRawModifiedDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReadProcessedDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseReadAtTimeDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryData(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseModificationInfo(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryModifiedData(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryEvent(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseWriteValue(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryUpdateDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseUpdateDataDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseUpdateStructureDataDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseUpdateEventDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDeleteRawModifiedDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDeleteAtTimeDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDeleteEventDetails(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryUpdateResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryUpdateEventResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseCallMethodRequest(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseCallMethodResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDataChangeFilter(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEventFilter(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAggregateConfiguration(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAggregateFilter(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEventFilterResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAggregateFilterResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMonitoringParameters(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMonitoredItemCreateRequest(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMonitoredItemCreateResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMonitoredItemModifyRequest(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMonitoredItemModifyResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseNotificationMessage(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDataChangeNotification(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseMonitoredItemNotification(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEventNotificationList(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEventFieldList(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseHistoryEventFieldList(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseStatusChangeNotification(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSubscriptionAcknowledgement(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseTransferResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseScalarTestType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseArrayTestType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseCompositeTestType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseBuildInfo(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseRedundantServerDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEndpointUrlListDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseNetworkGroupDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSamplingIntervalDiagnosticsDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseServerDiagnosticsSummaryDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseServerStatusDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSessionDiagnosticsDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSessionSecurityDiagnosticsDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseServiceCounterDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseStatusResult(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSubscriptionDiagnosticsDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseModelChangeStructureDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseSemanticChangeStructureDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseRange(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseEUInformation(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseComplexNumberType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseDoubleComplexNumberType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAxisInformation(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseXVType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseProgramDiagnosticDataType(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);
void parseAnnotation(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, const char *szFieldName);

void registerComplexTypes(void);
