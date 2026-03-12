(ns inter-server-management-api.specs.mail-block-click-house
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-block-click-house-data
  {
   (ds/req :date) inst?
   (ds/req :from) string?
   (ds/req :messageId) string?
   (ds/req :subject) string?
   (ds/req :to) string?
   })

(def mail-block-click-house-spec
  (ds/spec
    {:name ::mail-block-click-house
     :spec mail-block-click-house-data}))
