(ns inter-server-management-api.specs.mail-log
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.mail-log-entry :refer :all]
            )
  (:import (java.io File)))


(def mail-log-data
  {
   (ds/req :total) int?
   (ds/req :skip) int?
   (ds/req :limit) int?
   (ds/req :emails) (s/coll-of mail-log-entry-spec)
   })

(def mail-log-spec
  (ds/spec
    {:name ::mail-log
     :spec mail-log-data}))
