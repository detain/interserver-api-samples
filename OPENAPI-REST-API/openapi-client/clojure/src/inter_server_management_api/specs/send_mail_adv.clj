(ns inter-server-management-api.specs.send-mail-adv
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.email-address-name :refer :all]
            [inter-server-management-api.specs.email-address-name :refer :all]
            [inter-server-management-api.specs.email-address-name :refer :all]
            [inter-server-management-api.specs.email-address-name :refer :all]
            [inter-server-management-api.specs.email-address-name :refer :all]
            [inter-server-management-api.specs.mail-attachment :refer :all]
            )
  (:import (java.io File)))


(def send-mail-adv-data
  {
   (ds/req :subject) string?
   (ds/req :body) string?
   (ds/req :from) email-address-name-spec
   (ds/req :to) (s/coll-of email-address-name-spec)
   (ds/opt :replyto) (s/coll-of email-address-name-spec)
   (ds/opt :cc) (s/coll-of email-address-name-spec)
   (ds/opt :bcc) (s/coll-of email-address-name-spec)
   (ds/opt :attachments) (s/coll-of mail-attachment-spec)
   (ds/opt :id) int?
   })

(def send-mail-adv-spec
  (ds/spec
    {:name ::send-mail-adv
     :spec send-mail-adv-data}))
