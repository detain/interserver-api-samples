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
   (ds/req :created) string?
   (ds/req :time) int?
   (ds/req :user) string?
   (ds/req :transtype) string?
   (ds/req :origin) string?
   (ds/req :interface) string?
   (ds/opt :subject) string?
   (ds/opt :messageId) string?
   (ds/opt :sendingZone) string?
   (ds/opt :bodySize) int?
   (ds/opt :seq) int?
   (ds/opt :delivered) int?
   (ds/opt :code) int?
   (ds/opt :recipient) string?
   (ds/opt :response) string?
   (ds/opt :domain) string?
   (ds/opt :locked) int?
   (ds/opt :lockTime) string?
   (ds/opt :assigned) string?
   (ds/opt :queued) string?
   (ds/opt :mxHostname) string?
   })

(def mail-log-entry-spec
  (ds/spec
    {:name ::mail-log-entry
     :spec mail-log-entry-data}))
