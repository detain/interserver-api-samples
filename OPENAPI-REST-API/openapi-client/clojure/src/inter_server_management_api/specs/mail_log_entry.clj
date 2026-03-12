(ns inter-server-management-api.specs.mail-log-entry
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-log-entry-data
  {
   (ds/req :_id) int?
   (ds/req :id) string?
   (ds/req :from) string?
   (ds/req :to) string?
   (ds/req :subject) string?
   (ds/req :created) string?
   (ds/req :time) int?
   (ds/req :user) string?
   (ds/req :transtype) string?
   (ds/req :origin) string?
   (ds/req :interface) string?
   (ds/req :sendingZone) string?
   (ds/req :bodySize) int?
   (ds/req :seq) int?
   (ds/req :recipient) string?
   (ds/req :domain) string?
   (ds/req :locked) int?
   (ds/req :lockTime) int?
   (ds/req :assigned) string?
   (ds/req :queued) string?
   (ds/req :mxHostname) string?
   (ds/req :response) string?
   (ds/opt :messageId) string?
   })

(def mail-log-entry-spec
  (ds/spec
    {:name ::mail-log-entry
     :spec mail-log-entry-data}))
