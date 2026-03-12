(ns inter-server-management-api.specs.send-mail
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def send-mail-data
  {
   (ds/req :to) string?
   (ds/req :from) string?
   (ds/req :subject) string?
   (ds/req :body) string?
   })

(def send-mail-spec
  (ds/spec
    {:name ::send-mail
     :spec send-mail-data}))
